// 函数: sub_478ac0
// 地址: 0x478ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e3d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IGraph::graph::CGraphImplement::VTable** var_30 = arg1
*arg1 = &graph::CGraphImplement::`vftable'{for `IGraph'}
arg1[1] = &graph::CArray2D<uint8_t>::`vftable'
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_8_1 = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
var_8_1.b = 1
arg1[8].b = 0
sub_47b3b0(&arg1[1])
int32_t ecx_1 = 1
int32_t esi = 0
int32_t i = 1
int32_t var_2c = 1
int32_t ebx = 0
int32_t i_2 = 1

do
    int32_t i_3 = i
    int32_t var_18_1 = 1
    int32_t var_1c_1 = ecx_1
    int32_t ecx_2 = 1
    char* j_1 = nullptr
    int32_t var_20_1 = esi + 1
    void* j
    
    do
        j_1[*(arg1[2] + esi)] = (ecx_2 s/ 0x1fe).b
        int32_t eax_7
        int32_t edx_5
        edx_5:eax_7 = muls.dp.d(0x80808081, var_1c_1)
        int32_t edx_7 = (edx_5 + var_1c_1) s>> 8
        var_1c_1 += ebx
        j_1[*(arg1[2] + esi) + 1] = (edx_7 u>> 0x1f).b + edx_7.b
        int32_t eax_10
        int32_t edx_9
        edx_9:eax_10 = muls.dp.d(0x80808081, var_20_1)
        int32_t edx_11 = (edx_9 + var_20_1) s>> 8
        var_20_1 += ebx
        j_1[*(arg1[2] + esi) + 2] = (edx_11 u>> 0x1f).b + edx_11.b
        int32_t eax_13
        int32_t edx_13
        edx_13:eax_13 = muls.dp.d(0x80808081, i_3)
        int32_t edx_14 = edx_13 + i_3
        i_3 += ebx
        int32_t edx_15 = edx_14 s>> 8
        j_1[*(arg1[2] + esi) + 3] = (edx_15 u>> 0x1f).b + edx_15.b
        j = &j_1[4]
        ecx_2 = var_18_1 + ebx
        j_1 = j
        var_18_1 = ecx_2
    while (j s< 0x100)
    ebx += 8
    i = i_2 + 6
    ecx_1 = var_2c + 2
    i_2 = i
    esi += 4
    var_2c = ecx_1
while (i s< 0x601)

sub_405950(&arg1[5], 0x1ff)

for (char* i_1 = nullptr; i_1 s< 0x1ff; i_1 = &i_1[1])
    char edx_17 = -1
    
    if (i_1 s< 0xff)
        edx_17 = i_1.b
    
    i_1[arg1[5]] = edx_17

if (sub_405bb0() != 0 && sub_405c10() != 0)
    arg1[8].b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

arg1[8].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
