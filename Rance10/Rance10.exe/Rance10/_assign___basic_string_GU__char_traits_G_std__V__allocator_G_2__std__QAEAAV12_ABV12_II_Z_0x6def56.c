// 函数: ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEAAV12@ABV12@II@Z
// 地址: 0x6def56
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = arg2
int32_t eax = edi[4]

if (eax u< arg3)
    sub_6321b0()
    noreturn

void* ebx = arg4
void* eax_1 = eax - arg3

if (ebx u> eax_1)
    ebx = eax_1

if (arg1 != edi)
    if (std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Grow(
            arg1, ebx, 0) != 0)
        if (edi[5] u>= 8)
            edi = *edi
        
        int32_t* ecx_4
        
        if (arg1[5] u< 8)
            ecx_4 = arg1
        else
            ecx_4 = *arg1
        
        sub_6df102(ecx_4, edi + (arg3 << 1), ebx)
        arg1[4] = ebx
        int32_t* eax_7
        
        if (arg1[5] u< 8)
            eax_7 = arg1
        else
            eax_7 = *arg1
        
        *(eax_7 + (ebx << 1)) = 0
else
    sub_6e3249(arg1, arg3 + ebx)
    std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::erase(
        arg1, 0, arg3)

return arg1
