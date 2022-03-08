public class ReusePins
    {
        #region Private Variables
        private static ReusePins _reusePins;
        #endregion

        #region Public Static Methods
        public static ReusePins GetInstance()
        {
            if (_reusePins == null)
            {
                _reusePins = new ReusePins();
                _reusePins.PanTilt1 = new PanTilt(Pins.GPIO_PIN_D9, Pins.GPIO_PIN_D6);
                _reusePins.PanTilt2 = new PanTilt(Pins.GPIO_PIN_D10, Pins.GPIO_PIN_D5);
                _reusePins.OutputPort1 = new OutputPort(Pins.GPIO_PIN_D3, false);
                _reusePins.OutputPort2 = new OutputPort(Pins.GPIO_PIN_A5, false); 

            }
            return _reusePins;
        }
        #endregion

        #region Public Properties
        public PanTilt PanTilt1;
        public PanTilt PanTilt2;
        public OutputPort OutputPort1;
        public OutputPort OutputPort2;
        #endregion
    }