// 函数: sub_67f650
// 地址: 0x67f650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[0xc].b != 0x2e)
    return 

while (true)
    BOOL eax
    eax.b = *(arg1 + 0x31)
    
    if (eax.b != 0)
        if (eax.b != 0x2e)
            break
        
        if (*(arg1 + 0x32) != 0)
            break
    
    HANDLE hFindFile = *arg1
    
    if (hFindFile == 0xffffffff)
        break
    
    if (FindNextFileA(hFindFile, &arg1[1]) == 0)
        FindClose(*arg1)
        *arg1 = 0xffffffff
        break
    
    if (arg1[0xc].b != 0x2e)
        return 
