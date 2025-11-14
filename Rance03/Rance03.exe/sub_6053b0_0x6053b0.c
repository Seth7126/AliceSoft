// 函数: sub_6053b0
// 地址: 0x6053b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hFindFile = *(arg1 + 4)

if (hFindFile == 0xffffffff)
    goto label_6053cd

BOOL eax

if (FindClose(hFindFile) != 0)
    *(arg1 + 4) = 0xffffffff
label_6053cd:
    void** lpFileName = arg2
    
    if (lpFileName[5] u>= 0x10)
        lpFileName = *lpFileName
    
    eax = FindFirstFileA(lpFileName, arg1 + 8)
    *(arg1 + 4) = eax
    
    if (eax != 0xffffffff)
        if (*(arg1 + 0x34) == 0)
            sub_402110(arg3, arg1 + 0x34, nullptr)
            int32_t* eax_2
            eax_2.b = 1
            return eax_2
        
        char* ecx_1 = arg1 + 0x34
        
        do
            eax.b = *ecx_1
            ecx_1 = &ecx_1[1]
        while (eax.b != 0)
        
        sub_402110(arg3, arg1 + 0x34, ecx_1 - &ecx_1[1])
        int32_t* eax_3
        eax_3.b = 1
        return eax_3

eax.b = 0
return eax
