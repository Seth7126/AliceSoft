// 函数: sub_6cde90
// 地址: 0x6cde90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_6cdf10(arg1)
PSTR lpName

if (arg2[5] u< 0x10)
    lpName = arg2
else
    lpName = *arg2

HANDLE hFileMappingObject = OpenFileMappingA(0xf001f, 0, lpName)
*(arg1 + 4) = hFileMappingObject

if (hFileMappingObject != 0)
    hFileMappingObject = MapViewOfFile(hFileMappingObject, FILE_MAP_ALL_ACCESS, 0, 0, 0)
    *(arg1 + 8) = hFileMappingObject
    
    if (hFileMappingObject != 0)
        *(arg1 + 0xc) = GetFileSize(*(arg1 + 4), nullptr)
        
        if (arg1 + 0x10 != arg2)
            sub_403590(arg1 + 0x10, arg2, 0, 0xffffffff)
        
        int32_t* eax
        eax.b = 1
        return eax

hFileMappingObject.b = 0
return hFileMappingObject
