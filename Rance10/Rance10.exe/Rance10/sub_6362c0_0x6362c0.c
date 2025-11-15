// 函数: sub_6362c0
// 地址: 0x6362c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t** var_4_1 = arg3
int16_t* esi = arg4
int16_t* ebx = arg2
int16_t* edi = esi

if (esi != arg5)
    while (ebx != arg6)
        void arg_10
        char eax_3 = sub_636540(&arg_10, *esi, *ebx)
        ebx = &ebx[1]
        
        if (eax_3 == 0)
            *arg3 = edi
            return arg3
        
        esi = &esi[1]
        
        if (esi == arg5)
            break

if (ebx == arg6)
    edi = esi

*arg3 = edi
return arg3
