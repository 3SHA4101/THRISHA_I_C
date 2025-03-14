class FileManager:
    def __init__(self, filename):
        """Initialize with a filename"""
        self.filename = filename

    def write_to_file(self, content):
        """Method to write content to the file"""
        with open(self.filename, 'w') as file:
            file.write(content)
        print(f"Data written to {self.filename}")

    def read_from_file(self):
        """Method to read content from the file"""
        try:
            with open(self.filename, 'r') as file:
                content = file.read()
            return content
        except FileNotFoundError:
            return "File not found!"

    def append_to_file(self, content):
        """Method to append content to the file"""
        with open(self.filename, 'a') as file:
            file.write(content)
        print(f"Data appended to {self.filename}")

# Creating an object of FileManager
file_manager = FileManager("example.txt")

# Writing to the file
file_manager.write_to_file("Hello, this is the first line.\n")

# Appending data
file_manager.append_to_file("This is an appended line.\n")

# Reading from the file
content = file_manager.read_from_file()
print("\nFile Content:")
print(content)
