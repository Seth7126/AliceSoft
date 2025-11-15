// 函数: sub_69af20
// 地址: 0x69af20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

TEB* fsbase

if (data_7fd530 s> *(*fsbase->ThreadLocalStoragePointer + 4))
    __Init_thread_header(&data_7fd530)
    
    if (data_7fd530 == 0xffffffff)
        data_7fd544 = &std::_Generic_error_category::`vftable'{for `std::error_category'}
        data_7fd548 = 3
        _atexit(sub_74d5e0)
        sub_6e85d6(&data_7fd530)

return &data_7fd544
