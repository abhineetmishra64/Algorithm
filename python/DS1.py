import matplotlib.pyplot as plt
import seaborn as sns
import os
import pandas as pd
import numpy as np
os. chdir("/root/Desktop")
cars_data = pd.read_csv('Toyota.csv', index_col=0, na_values=["??", "???"])
cars_data.dropna(axis=0,inplace=True)
#plt.scatter(cars_data['Age'],cars_data['Price'],c='red')
#plt.xlabel('Age(months)')
#plt.ylabel('Price(Euros)')
#plt.show
#plt.hist(cars_data['KM'],
#       color='green',
#       edgecolor='white',
#       bins=5)
#plt.title('Histogram of kilometer')
#plt.xlabel('kilometer')
#plt.ylabel('Frequency')
#plt.show()

#counts=[979,120,12]
#FuelType=('petrol','diesel','nng')
#index=np.arange(len(FuelType))
#plt.bar(index,counts,color=['red','blue','cyan'])
#plt.title('bar plots of fuel types')
#plt.xlabel('Fuel types')
#plt.ylabel('frequency')
#plt.xticks(index,FuelType,rotation=90)
#plt.show()

#sns.set(style="darkgrid")
#sns.regplot(x=cars_data['Age'],y=cars_data['Price'],marker="*",fit_reg=False)

#sns.lmplot(x='Age',y='Price',data=cars_data,
#           fit_reg=False,hue='FuelType',
 #          legend=True,palette="Set1")
#sns.distplot(cars_data['Age'],kde=False,bins=5)
 
 #bar plots
 
#sns.countplot(x='FuelType',data=cars_data,hue='Automatic')
 
 #boxplot
 
#sns.boxplot(y=cars_data['Price'])

#sns.boxplot(x=cars_data['FuelType'],y=cars_data['Price'],
#           hue='Automatic',data=cars_data)
          
#f,(ax_box,ax_hist)=plt.subplots(2,gridspec_kw={"height_ratios":(.15,.85)})
#sns.boxplot(cars_data['Price'],ax=ax_box)
#sns.distplot(cars_data["Price"],ax=ax_hist,kde=False)  
#sns.pairplot(cars_data,kind="scatter",hue="FuelType")
#plt.show()

#dealing with missing data

#cars_data1=cars_data.copy()
#print(cars_data1.isnull().sum())

#print(cars_data1['Age'].mean())
#print(cars_data1['KM'].median())
#print(cars_data.FuelType.dtype)	

