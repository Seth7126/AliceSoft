// 函数: ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEAAV12@ABV12@II@Z
// 地址: 0x6dee56
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
void** edi = arg2
int32_t eax = edi[4]

if (eax u< arg3)
    sub_6321b0()
    noreturn

void* ebx = arg4
void* eax_1 = eax - arg3

if (ebx u> eax_1)
    ebx = eax_1

void* ecx_1 = arg1[4]

if (not.d(ecx_1) u<= ebx)
    sub_631dd0()
    noreturn

void* eax_4 = ecx_1 + ebx

if (ebx != 0 && std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Grow(
        arg1, eax_4, 0) != 0)
    if (edi[5] u>= 8)
        edi = *edi
    
    int32_t* ecx_3
    
    if (arg1[5] u< 8)
        ecx_3 = arg1
    else
        ecx_3 = *arg1
    
    sub_6df102(ecx_3 + (arg1[4] << 1), edi + (arg3 << 1), ebx)
    bool cond:0_1 = arg1[5] u< 8
    arg1[4] = eax_4
    int32_t* eax_10
    
    if (cond:0_1)
        eax_10 = arg1
    else
        eax_10 = *arg1
    
    *(eax_10 + (eax_4 << 1)) = 0

return arg1
