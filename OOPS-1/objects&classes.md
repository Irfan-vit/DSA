template -> class

-  it is a blueprint that defines properties and functions of a particular object
    The copies of template(class) which we create to pass the values to the properties of the classs are called objects
        Note: we can create many objects for a single class

-  classes are also called userdefined data types.
EX: int a;
    here type of "a" is integer variable where "int" is a pre-definrd data-type when we create "int a" then a memory block of 4-BYTES will be allocated to the variable "a", similarly...
        If there is a class named "Student" then we create an object "Student s1" then the type of "s1" is Student type where "Student" is a user defined data type when we create a object from class then the memory allocated for the object will be similar to the properties of class.
            EX: if class contains two prpoerties of integer data types then the memory allocated to the object will be almost simitar to 4-BYTES + 4-BYTES = 8-BYTES.

- dynamic Class creation
    Student *s2 = new Student;
        to acess the or define the properties of the dynamic object we use (*s2).age = 24; (or) s2 -> age = 24;

- acess modifyers in classes
    Public, Private, Protected