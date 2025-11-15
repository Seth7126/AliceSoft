// 函数: sub_596c50
// 地址: 0x596c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

TEB* fsbase

if (data_7fd5d4 s> *(*fsbase->ThreadLocalStoragePointer + 4))
    __Init_thread_header(&data_7fd5d4)
    
    if (data_7fd5d4 == 0xffffffff)
        data_7fd5d8 = &sealengine::CSphereVolume::`vftable'
        data_7fd5dc = zx.o(0)
        _atexit(sub_74d430)
        sub_6e85d6(&data_7fd5d4)

return &data_7fd5d8
