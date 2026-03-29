# imports
import pandas as pd
​
def rename_columns(df, names):
    df_copy = df.copy()
    df_copy.columns = names
    return df_copy