// 函数: ___wtomb_environ
// 地址: 0x6ac595
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

PSTR lpMultiByteStr_1 = arg1
int32_t* esi = data_75c92c
lpMultiByteStr_1 = nullptr
wchar16* lpWideCharStr

while (true)
    lpWideCharStr = *esi
    
    if (lpWideCharStr == 0)
        break
    
    int32_t cbMultiByte =
        WideCharToMultiByte(0, 0, lpWideCharStr, 0xffffffff, nullptr, 0, nullptr, nullptr)
    
    if (cbMultiByte == 0)
        return 0xffffffff
    
    PSTR lpMultiByteStr = sub_69e723(cbMultiByte, 1)
    lpMultiByteStr_1 = lpMultiByteStr
    
    if (lpMultiByteStr == 0)
        return 0xffffffff
    
    if (WideCharToMultiByte(0, 0, *esi, 0xffffffff, lpMultiByteStr, cbMultiByte, nullptr, nullptr)
            == 0)
        _free(lpMultiByteStr_1)
        return 0xffffffff
    
    if (sub_6ad5ef(&lpMultiByteStr_1, 0) s< 0 && lpMultiByteStr_1 != 0)
        _free(lpMultiByteStr_1)
        lpMultiByteStr_1 = nullptr
    
    esi = &esi[1]

return lpWideCharStr
