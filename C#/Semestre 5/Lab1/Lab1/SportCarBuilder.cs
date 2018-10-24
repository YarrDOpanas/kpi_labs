
namespace Lab1
{    
    /// <summary>
     /// Конструирует спортивный вариант автомобиля собирая его из частей. 
     /// </summary>
    class SportCarBuilder : CarBuilder
    {
        public override void SetCabin()
        {
            Car.Cabin = Cabin.Leather;
        }

        public override void SetCarcass()
        {
            Car.Carcass = Carcass.Composite;
        }

        public override void SetColor()
        {
            Car.Color = Color.Red;
        }

        public override void SetWheel()
        {
            Car.Wheels = Wheels.Composite;
        }

        public override void SetPrice()
        {
            Car.Price = 3_987_750m;
        }
    }
}
