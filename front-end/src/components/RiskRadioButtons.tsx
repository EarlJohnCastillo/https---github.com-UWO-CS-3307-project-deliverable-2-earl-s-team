import "./RadioStyle.css";

function RiskRadioButtons({ callback }) {

  return (
    <>
      <h4>Risk Tollerance?</h4>
      <input
        type="radio"
        name="RiskLevel"
        value=" Very Aggressive"
        onChange={(e) => callback(e.target.value)}
        id="VeryAggressive"
      />
      <label htmlFor="VeryAggressive">Very Aggressive</label>
      <input
        type="radio"
        name="RiskLevel"
        value="Aggressive"
        onChange={(e) => callback(e.target.value)}
        id="Aggressive"
      />
      <label htmlFor="Aggressive">Aggressive</label>
      <input
        type="radio"
        name="RiskLevel"
        value="Moderately Aggressive"
        onChange={(e) => callback(e.target.value)}
        id="ModeratelyRisky"
      />
      <label htmlFor="ModeratelyRisky">Moderately Risky</label>
      <input
        type="radio"
        name="RiskLevel"
        value="Moderately Conservative"
        onChange={(e) => callback(e.target.value)}
        id="ModeratelyConservative"
      />
      <label htmlFor="ModeratelyConservative">Moderately Conservative</label>
      <input
        type="radio"
        name="RiskLevel"
        value="Conservative"
        onChange={(e) => callback(e.target.value)}
        id="Conservative"
      />
      <label htmlFor="Conservative">Conservative</label>
    </>
  );
}

export default RiskRadioButtons;
