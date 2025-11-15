// 函数: sub_68f4d0
// 地址: 0x68f4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2

if ((*(*arg1 + 8))() != 0)
    bool cond:0 = (*(*arg1 + 0x44))() == 0
    int32_t eax_7 = *(*arg1 + 0x60)
    
    if (cond:0)
        int32_t ecx_5
        ecx_5.b = eax_7() != 0
        return ecx_5 << 0x19 | 2
    
    int32_t ecx_2
    ecx_2.b = eax_7() != 0
    return ecx_2 << 0x19 | 0x4002

if (ebx.b != 0)
    return 1

bool cond:2 = (*(*arg1 + 0x4c))(zx.d(
    (*(*arg1 + 0x50))(zx.d((*(*arg1 + 0x54))(zx.d((*(*arg1 + 0x5c))(zx.d((*(*arg1 + 0x60))()))))))
    != 0)) != 0
int32_t ecx_13
ecx_13.b = cond:2
int32_t ecx_15
ecx_15.b = (*(*arg1 + 0x48))(ecx_13) != 0
int32_t ecx_17
ecx_17.b = (*(*arg1 + 0x44))(ecx_15) != 0
int32_t ecx_19
ecx_19.b = (*(*arg1 + 0x3c))(ecx_17) != 0
int32_t ecx_21
ecx_21.b = (*(*arg1 + 0x34))(ecx_19) != 0
int32_t ecx_23
ecx_23.b = (*(*arg1 + 0x30))(ecx_21) != 0
int32_t ecx_25
ecx_25.b = (*(*arg1 + 0x2c))(ecx_23) != 0
int32_t ecx_27
ecx_27.b = (*(*arg1 + 0x24))(ecx_25) != 0
int32_t eax_54 = (*(*arg1 + 0x20))(ecx_27)
int32_t eax_55 = (*(*arg1 + 0x1c))()
int32_t ecx_30
ecx_30.b = eax_55.b != 0
return sub_6920a0(eax_55, eax_54, ecx_30)
