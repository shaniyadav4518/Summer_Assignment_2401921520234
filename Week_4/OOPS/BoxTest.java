class Box {
    protected double length, breadth, height;

    public Box() {
        length = 0;
        breadth = 0;
        height = 0;
    }

    public Box(double length, double breadth, double height) {
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    public double area() {
        return 2 * (length * breadth + breadth * height + length * height);
    }

    public double volume() {
        return length * breadth * height;
    }
}

class Box3D extends Box {
    public Box3D() {
        super();
    }

    public Box3D(double length, double breadth, double height) {
        super(length, breadth, height);
    }
}

public class BoxTest {
    public static void main(String[] args) {
        Box3D b = new Box3D(2, 3, 4);
        System.out.println("Length = " + b.length);
        System.out.println("Breadth = " + b.breadth);
        System.out.println("Height = " + b.height);
        System.out.println("Area = " + b.area());
        System.out.println("Volume = " + b.volume());
    }
}
