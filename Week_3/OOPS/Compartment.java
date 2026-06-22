abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "First Class Compartment: AC coach, please keep your tickets ready for checking.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment: Reserved for women passengers only.";
    }
}

class General extends Compartment {
    public String notice() {
        return "General Compartment: Unreserved seating, open to all passengers.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment: No passengers allowed, goods and baggage only.";
    }
}
