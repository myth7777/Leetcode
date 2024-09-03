import pandas as pd

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    df = students
    df = df.dropna(subset='name')
    return df