import pandas as pd

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    df = employees
    df.insert(2, "bonus", df["salary"]*2)
    return df