# program to reverse a list
arr = ['k','a','w','a','l','j','e','e','t']
mid=arr[len(arr)//2]
for i in range(1,len(arr)):
    temp = arr[i-1]
    arr[i-1] = arr[len(arr)-i]
    arr[len(arr)-i] = temp
    if(arr[i-1]==mid or arr[len(arr)-i]==mid):
       break
    print(arr)
    
