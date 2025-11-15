// 函数: ___FrameUnwindFilter
// 地址: 0x6ffca3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_1 = *arg1

if (*eax_1 == 0xe0434352 || *eax_1 == 0xe0434f4d)
    if (*(sub_702f40() + 0x18) s> 0)
        void* eax_4 = sub_702f40()
        *(eax_4 + 0x18) -= 1
else if (*eax_1 == 0xe06d7363)
    *(sub_702f40() + 0x18) = 0
    noreturn _terminate() __tailcall

return 0
