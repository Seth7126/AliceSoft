// 函数: __uninitMTAoncurrentthread
// 地址: 0x69b93b
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (data_75c910 == 0)
    int32_t result =
        GetProcAddress(LoadLibraryExW(combase.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32), 
        "RoUninitialize")
    
    if (result == 0)
        return result
    
    data_75c90c = EncodePointer(result)
    data_75c910 = 1

jump(DecodePointer(data_75c90c))
