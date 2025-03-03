import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame(students)
    dfm = df.loc[students['student_id']==101, 'name':]
    return dfm