import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import chi2
X = np.arange(0, 20, 0.001)
plt.plot(X, chi2.pdf(X,df=2), label="df2")
plt.plot(X, chi2.pdf(X,df=4), label="df4")
plt.plot(X, chi2.pdf(X,df=6), label="df6")
plt.plot(X, chi2.pdf(X,df=8), label="df8")
plt.plot(X, chi2.pdf(X,df=10), label="df10")
plt.plot(X, chi2.pdf(X,df=12), label="df12")
plt.legend()
