import { useState } from "react";

function InvestmentYears({ callback }) {
  const [years, setAmount] = useState(1);

  const handleAmount = (value: number) => {
    //Handles if value is less than 1 Year
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
        <h4>How Many Years Would You Like To Invest?</h4>
        <div className="big-input-div">
          <input
            type="number"
            id="years_invest"
            value={years}
            onChange={(e) => handleAmount(Number(e.target.value))}
          />
        </div>

        <span className="min-year-msg">
          Minimum Investment Period = 1 Year. Recommneded to invest for 5+ Years
        </span>
      </div>
    </div>
  );
}

export default InvestmentYears;
