// 函数: __initMTAoncurrentthread
// 地址: 0x69b866
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (data_75c908 == 0)
    int32_t result =
        GetProcAddress(LoadLibraryExW(combase.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32), 
        "RoInitialize")
    
    if (result == 0)
        return result
    
    data_75c904 = EncodePointer(result)
    data_75c908 = 1

int32_t eax_4 = DecodePointer(data_75c904)(1)
int32_t eax_5 = neg.d(eax_4)
return sbb.d(eax_5, eax_5, eax_4 != 0) + 1
