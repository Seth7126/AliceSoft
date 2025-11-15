// 函数: sub_69b040
// 地址: 0x69b040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

TEB* fsbase

if (data_7fd528 s> *(*fsbase->ThreadLocalStoragePointer + 4))
    __Init_thread_header(&data_7fd528)
    
    if (data_7fd528 == 0xffffffff)
        data_7fd53c = &std::_Future_error_category::`vftable'{for `std::_Generic_error_category'}
        data_7fd540 = 1
        _atexit(sub_74d5d0)
        sub_6e85d6(&data_7fd528)

return &data_7fd53c
