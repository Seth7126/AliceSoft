// 函数: ??$initialize_environment_by_cloning_nolock@D@@YAHXZ
// 地址: 0x710cc9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_4 = edi
int32_t* edi_1 = data_7fc6d4

if (edi_1 == 0)
    return 0xffffffff

while (*edi_1 != 0)
    int32_t cbMultiByte =
        WideCharToMultiByte(0, 0, *edi_1, 0xffffffff, nullptr, 0, nullptr, nullptr)
    
    if (cbMultiByte == 0)
        return 0xffffffff
    
    PSTR lpMultiByteStr = __calloc_base(cbMultiByte, 1)
    int32_t eax_2
    
    if (lpMultiByteStr != 0)
        eax_2 = WideCharToMultiByte(0, 0, *edi_1, 0xffffffff, lpMultiByteStr, cbMultiByte, nullptr, 
            nullptr)
    
    if (lpMultiByteStr == 0 || eax_2 == 0)
        __free_base(lpMultiByteStr)
        return 0xffffffff
    
    int32_t var_10_1 = 0
    PSTR lpMultiByteStr_1 = lpMultiByteStr
    sub_71bc62()
    __free_base(0)
    edi_1 = &edi_1[1]

return 0
