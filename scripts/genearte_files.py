from jinja2 import Environment, FileSystemLoader

class BitField:
    def __init__(self) -> None:
        self.name = None
        self.startBit = None
        self.bitLength = None
    

class Register:
    def __init__(self) -> None:
        self.name = None
        self.bitFields = []


def generate_script(filepath: str, new_filepath: str):
    txt = ""
    with open(filepath, "r") as reader:
        txt = reader.read()

    for clas in  txt.split("class"):
        register = Register()
        if (clas.find(":") != -1):
            register.name = clas.split(":")[0].replace(" ", "")
            print(register.name)
        if (clas.find("Register(address)") != -1):
            bitFields = clas.split("Register(address)")[1].split("\{\}")[0].replace("\n", "").replace(" ", "").replace("{", "").replace("}", "").replace(";", "")[1:]
            for bitField in bitFields.split("),"):
                bf = BitField()
                bf.name = bitField.split("(")[0]
                print(f"   {bf.name}")
                bf.startBit = bitField.split("(")[1].split(",")[0]
                bf.bitLength = bitField.split(",")[1].split(")")[0]
                register.bitFields.append(bf)

        context = {
            "Register" : register
        }

        environment = Environment(loader=FileSystemLoader("templates/"))
        results_template = environment.get_template("Registers.h.j2")
        with open(new_filepath, "a") as results:
                results.write(results_template.render(context))
                print(f"... wrote {register.name}")

if __name__ == "__main__":
    generate_script("old/Registers.h", "Registers.h")
