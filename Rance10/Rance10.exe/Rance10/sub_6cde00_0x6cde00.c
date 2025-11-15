// 函数: sub_6cde00
// 地址: 0x6cde00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_6cdf10(arg1)
PSTR lpName

if (arg2[5] u< 0x10)
    lpName = arg2
else
    lpName = *arg2

int32_t* result = CreateFileMappingA(0xffffffff, nullptr, PAGE_READWRITE, 0, arg3, lpName)
*(arg1 + 4) = result

if (result != 0)
    if (GetLastError() != ERROR_ALREADY_EXISTS)
        result = MapViewOfFile(*(arg1 + 4), FILE_MAP_ALL_ACCESS, 0, 0, 0)
        *(arg1 + 8) = result
        
        if (result != 0)
            *(arg1 + 0xc) = arg3
            
            if (arg1 + 0x10 != arg2)
                sub_403590(arg1 + 0x10, arg2, 0, 0xffffffff)
            
            result.b = 1
            return result
    else
        sub_6cdf10(arg1)

result.b = 0
return result
