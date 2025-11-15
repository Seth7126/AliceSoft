// 函数: sub_6cf8e0
// 地址: 0x6cf8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HRSRC hResInfo = FindResourceA(arg3, arg2, arg4)

if (hResInfo == 0)
    hResInfo.b = 0
    return hResInfo

HGLOBAL edi = SizeofResource(arg3, hResInfo)
HGLOBAL hResData

if (edi != 0)
    hResData = LoadResource(arg3, hResInfo)
    
    if (hResData != 0)
        hResData = LockResource(hResData)
        
        if (hResData != 0)
            sub_405950(arg5, edi)
            sub_700660(*arg5, hResData, edi)
            char* eax
            eax.b = 1
            return eax

hResData.b = 0
return hResData
