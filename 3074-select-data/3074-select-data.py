import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    dfn = students.loc[students['student_id']==101, 'name':]
    return dfn