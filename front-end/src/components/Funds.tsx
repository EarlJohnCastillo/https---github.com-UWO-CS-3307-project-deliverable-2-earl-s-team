import { useState } from "react";

function Funds({ callback }) {
  const [amount, setAmount] = useState(1);

  const handleAmount = (value: number) => {
    //Handles if value is less than 1 dollar
    if (value < 1) {
      setAmount(1);
      callback(1);
    } else {
      setAmount(value);
      callback(value);
    }
  };

  return (
    <div className="wrapper">
      <div className="input-and-minimum-amount-container">
        <h4>Available Funds To Invest</h4>
        <div className="big-input-div">
          <div className="dollar">$</div>
          <input
            type="number"
            id="funds"
            value={amount}
            onChange={(e) => handleAmount(Number(e.target.value))}
          />
        </div>

        <span className="min-amount-msg">
          Minimum Investment $1 Recommended to have at least $1000 available
        </span>
      </div>
    </div>
  );
}

export default Funds;
