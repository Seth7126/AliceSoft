// 函数: sub_6971d0
// 地址: 0x6971d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

TEB* fsbase

if (data_7fd52c s> *(*fsbase->ThreadLocalStoragePointer + 4))
    __Init_thread_header(&data_7fd52c)
    
    if (data_7fd52c == 0xffffffff)
        data_7fd534 = 0
        data_7fd538 = 0
        _atexit(std::basic_ostream<uint16_t,struct std::char_traits<uint16_t> >::_Sentry_base::~_Sentry_base)
        sub_6e85d6(&data_7fd52c)

return &data_7fd534
