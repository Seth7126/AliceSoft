// 函数: sub_562a00
// 地址: 0x562a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_esi = arg1
struct passregister::CPassRegister::VTable** ebx = sub_562930(data_7fcba8)

if (ebx != 0 && sub_562f50(ebx).b != 0)
    void** esi = sub_432330(&ebx[0xb], arg2)
    void** eax_1
    
    if (esi != ebx[0xb])
        eax_1 = sub_412ca0(arg2, &esi[4])
    
    if (esi == ebx[0xb] || eax_1.b != 0)
        esi = ebx[0xb]
    
    eax_1.b = esi != ebx[0xb]
    return eax_1

struct passregister::CPassRegister::VTable** eax
eax.b = 0
return eax
