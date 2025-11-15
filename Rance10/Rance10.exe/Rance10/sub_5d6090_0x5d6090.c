// 函数: sub_5d6090
// 地址: 0x5d6090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct IShaderParam::sealengine::CShaderParam::VTable* var_40
sub_5d62f0(arg1, sub_5d6010(&var_40))
*(arg1 + 8) = 0
char eax_3 = (*(*arg4 + 0x6c))()
char eax_6

if (eax_3 != 0)
    eax_6 = (*(*arg3 + 0x14))()

char eax_7

if (eax_3 == 0 || eax_6 == 0)
    eax_7 = 0
else
    eax_7 = 1

*(arg1 + 0xc) = eax_7
sub_5d63a0(arg1, arg3, arg5)
int32_t eax_9
eax_9.b = (*(*arg4 + 0x24))() s> 0
*(arg1 + 0x14) = eax_9.b
int32_t eax_11 = (*(*arg4 + 0x38))()
int32_t eax_13

if (eax_11 s> 0)
    eax_13 = (*(*arg3 + 0x60))()

char eax_14

if (eax_11 s<= 0 || eax_13 == 0)
    eax_14 = 0
else
    eax_14 = 1

*(arg1 + 0x15) = eax_14
*(arg1 + 0x16) = (*(*arg3 + 0x1c))()
int32_t eax_19 = (*(*arg4 + 0x34))()
char eax_22

if (eax_19 s> 0)
    eax_22 = (*(*arg3 + 0x10))()

char eax_23

if (eax_19 s<= 0 || eax_22 == 0)
    eax_23 = 0
else
    eax_23 = 1

*(arg1 + 0x17) = eax_23
char eax_32

if ((*(*arg4 + 0x40))() s<= 0)
    eax_32 = 0
else
    (*(*arg4 + 0x44))()
    float var_44_1 = fconvert.s(arg2)
    var_44_1 f- 0
    int32_t eax_28
    eax_28:1.b = (var_44_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(var_44_1, 0f) ? 1 : 0) << 2
        | (var_44_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        eax_32 = 0
    else if ((*(*arg3 + 0xc0))() == 0)
        eax_32 = 0
    else
        eax_32 = 1

*(arg1 + 0x18) = eax_32
int32_t* ebx
ebx.b = (*(*arg3 + 0x4c))() != 0
bool ecx_16 = (*(*arg3 + 0x54))() != 0

if (ebx.b != 0)
    int32_t eax_37
    eax_37.b = ecx_16 != 0
    *(arg1 + 0x1c) = eax_37 + 1
else if (ecx_16 == 0)
    *(arg1 + 0x1c) = 0
else
    *(arg1 + 0x1c) = 3

*(arg1 + 0x20) = (*(*arg3 + 0x80))()
*(arg1 + 0x24) = (*(*arg4 + 0x74))()
*(arg1 + 0x28) = (*(*arg3 + 0xc))()
*(arg1 + 0x29) = (*(*arg3 + 0x90))()
int32_t eax_51 = (*(*arg4 + 0x3c))()
float var_44_2

if (eax_51 s> 0)
    (*(*arg3 + 0xbc))()
    var_44_2 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
    unimplemented  {fstp dword [esp+0xc], st0}

char eax_54

if (eax_51 s<= 0 || var_44_2 f<= 0)
    eax_54 = 0
else
    eax_54 = 1

*(arg1 + 0x2a) = eax_54
*(arg1 + 0x2b) = (*(*arg3 + 0x44))()
*(arg1 + 0x2c) = (*(*arg3 + 0xc8))()
char eax_63 = (*(*arg3 + 0xd0))()
float var_44_3

if (eax_63 != 0)
    (*(*arg3 + 0xcc))()
    var_44_3 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
    unimplemented  {fstp dword [esp+0xc], st0}

char eax_66

if (eax_63 == 0 || var_44_3 f<= 0)
    eax_66 = 0
else
    eax_66 = 1

*(arg1 + 0x2d) = eax_66
char eax_69 = (*(*arg4 + 0x48))()
char eax_72

if (eax_69 != 0)
    eax_72 = (*(*arg3 + 0xc4))()

char eax_73

if (eax_69 == 0 || eax_72 == 0)
    eax_73 = 0
else
    eax_73 = 1

*(arg1 + 0x2e) = eax_73
int32_t eax_75
eax_75.b = (*(*arg3 + 0xd8))() s> 0
*(arg1 + 0x2f) = eax_75.b
sub_5d6400(arg1)
return sub_5d64c0(arg1, arg5, arg6) != 0
