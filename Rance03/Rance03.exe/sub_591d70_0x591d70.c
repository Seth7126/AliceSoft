// 函数: sub_591d70
// 地址: 0x591d70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct IShaderParam::sealengine::CShaderParam::VTable* const var_3c =
    &sealengine::CShaderParam::`vftable'{for `IShaderParam'}
int32_t var_38 = 0
int32_t var_34 = 0
char var_30 = 0
int32_t var_2c = 0
int32_t var_28 = 0
char var_24 = 0
int32_t var_20 = 0
char var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
char var_c = 0
int32_t var_8 = 0
sub_592160(arg1, &var_3c)
int32_t* ebp = arg4
*(arg1 + 8) = 0
char eax_2 = (*(*ebp + 0x6c))()
char eax_5

if (eax_2 != 0)
    eax_5 = (*(*arg3 + 0x14))()

char eax_6

if (eax_2 == 0 || eax_5 == 0)
    eax_6 = 0
else
    eax_6 = 1

*(arg1 + 0xc) = eax_6

if ((*(*arg3 + 0x80))() == 0)
    *(arg1 + 0x10) = 0
else
    int32_t eax_11 = *(arg5 + 8)
    *(arg1 + 0x10) = eax_11
    
    if (eax_11 - 2 u<= 1)
        int32_t* eax_14 = (*(*arg3 + 0x4c))()
        
        if (eax_14 != 0 && (*(*eax_14 + 0x18))() == 0)
            *(arg1 + 0x10) = 1

int32_t eax_19
eax_19.b = (*(*ebp + 0x24))() s> 0
*(arg1 + 0x14) = eax_19.b
int32_t eax_21 = (*(*ebp + 0x38))()
int32_t eax_23

if (eax_21 s> 0)
    eax_23 = (*(*arg3 + 0x5c))()

char eax_24

if (eax_21 s<= 0 || eax_23 == 0)
    eax_24 = 0
else
    eax_24 = 1

*(arg1 + 0x15) = eax_24
*(arg1 + 0x16) = (*(*arg3 + 0x18))()
int32_t eax_29 = (*(*ebp + 0x34))()
char eax_32

if (eax_29 s> 0)
    eax_32 = (*(*arg3 + 0x10))()

char eax_33

if (eax_29 s<= 0 || eax_32 == 0)
    eax_33 = 0
else
    eax_33 = 1

*(arg1 + 0x17) = eax_33
char eax_42

if ((*(*ebp + 0x40))() s<= 0)
    eax_42 = 0
else
    (*(*ebp + 0x44))()
    arg4 = fconvert.s(arg2)
    arg4 f- 0
    int32_t eax_38
    eax_38:1.b =
        (arg4 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg4, 0f) ? 1 : 0) << 2 | (arg4 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        eax_42 = 0
    else if ((*(*arg3 + 0xbc))() == 0)
        eax_42 = 0
    else
        eax_42 = 1

*(arg1 + 0x18) = eax_42
int32_t ebx
ebx.b = (*(*arg3 + 0x48))() != 0
int32_t eax_46
eax_46.b = (*(*arg3 + 0x50))() != 0

if (ebx.b != 0)
    if (eax_46.b == 0)
        *(arg1 + 0x1c) = 1
    else
        *(arg1 + 0x1c) = 2
else if (eax_46.b == 0)
    *(arg1 + 0x1c) = 0
else
    *(arg1 + 0x1c) = 3

*(arg1 + 0x20) = (*(*arg3 + 0x7c))()
*(arg1 + 0x24) = (*(*ebp + 0x74))()
*(arg1 + 0x28) = (*(*arg3 + 0xc))()
*(arg1 + 0x29) = (*(*arg3 + 0x8c))()
int32_t eax_59 = (*(*ebp + 0x3c))()

if (eax_59 s> 0)
    (*(*arg3 + 0xb8))()
    arg4 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
    unimplemented  {fstp dword [esp+0x54], st0}

char eax_62

if (eax_59 s<= 0 || arg4 f<= 0)
    eax_62 = 0
else
    eax_62 = 1

*(arg1 + 0x2a) = eax_62
*(arg1 + 0x2b) = (*(*arg3 + 0x40))()
*(arg1 + 0x2c) = (*(*arg3 + 0xc4))()
char eax_71 = (*(*arg3 + 0xcc))()

if (eax_71 != 0)
    (*(*arg3 + 0xc8))()
    arg4 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
    unimplemented  {fstp dword [esp+0x54], st0}

char eax_74

if (eax_71 == 0 || arg4 f<= 0)
    eax_74 = 0
else
    eax_74 = 1

*(arg1 + 0x2d) = eax_74
char eax_77 = (*(*ebp + 0x48))()
char eax_80

if (eax_77 != 0)
    eax_80 = (*(*arg3 + 0xc0))()

char eax_81

if (eax_77 == 0 || eax_80 == 0)
    eax_81 = 0
else
    eax_81 = 1

bool cond:2 = *(arg1 + 0x2b) == 0
*(arg1 + 0x2e) = eax_81

if (not(cond:2))
    *(arg1 + 0x17) = 0
    *(arg1 + 0x20) = 0
    *(arg1 + 0x28) = 0
    *(arg1 + 0x2e) = 0

if (*(arg1 + 0x18) != 0)
    *(arg1 + 0x10) = 0

if (*(arg1 + 0x2e) != 0)
    *(arg1 + 0x17) = 0
    *(arg1 + 0x20) = 0

if (*(arg1 + 0x16) != 0)
    *(arg1 + 0x17) = 0
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0

int32_t eax_82 = *(arg1 + 0x24)

if (eax_82 == 2)
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0
    *(arg1 + 0x20) = 0
label_5920a8:
    *(arg1 + 0x2e) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x29) = 0
else if (eax_82 == 3)
    *(arg1 + 0x14) = (eax_82 - 2).w - 1
    goto label_5920a8

if (*(arg1 + 0x17) == 0)
    *(arg1 + 0x14) = 0
    *(arg1 + 0x2a) = 0
    *(arg1 + 0x10) = 0

if (*(arg1 + 0x20) == 0)
    *(arg1 + 0x15) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x29) = 0
    *(arg1 + 0x10) = 0

int32_t result

if (*(arg5 + 4) - 2 u> 1)
    result.b = 0
    return result

*(arg1 + 4) = 0x14

if (arg6 == 0 || (*(arg1 + 0x10) s< 1 && *(arg1 + 0x2a) == 0 && *(arg1 + 0x18) == 0))
    *(arg1 + 4) = 0x14
else
    *(arg1 + 4) = 0x1e

if (*(arg1 + 4) == 0x14)
    *(arg1 + 0x10) = 0
    *(arg1 + 0x2a) = 0
    *(arg1 + 0x18) = 0

result.b = 1
return result
