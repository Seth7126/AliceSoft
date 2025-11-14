// 函数: sub_4694c0
// 地址: 0x4694c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b92f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IGraph::graph::CGraph::VTable** var_10 = arg1
*arg1 = &graph::CGraph::`vftable'{for `IGraph'}
arg1[1] = &graph::CArray2D<uint8_t>::`vftable'
arg1[3] = 0
arg1[4] = 0
arg1[2] = 0
int32_t var_4 = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
var_4.b = 1
arg1[8].w = 0
*(arg1 + 0x22) = 0
sub_46c3e0(&arg1[1], 0x100)
int32_t ecx_1 = 1
int32_t* esi = nullptr
int32_t i = 1
int32_t var_14 = 1
int32_t i_3 = 1
int32_t ebx = 0

do
    int32_t i_2 = i
    int32_t edx_1 = 1
    int32_t var_28_1 = 1
    int32_t j = 0
    void* var_20_1 = esi + 1
    int32_t var_24_1 = ecx_1
    
    do
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = muls.dp.d(0x80808081, edx_1)
        int32_t edx_4 = (edx_2 + var_28_1) s>> 8
        (*(esi + arg1[2]))[j] = (edx_4 u>> 0x1f).b + edx_4.b
        int32_t eax_7
        int32_t edx_5
        edx_5:eax_7 = muls.dp.d(0x80808081, var_24_1)
        int32_t edx_7 = (edx_5 + var_24_1) s>> 8
        var_24_1 += ebx
        *(*(esi + arg1[2]) + j + 1) = (edx_7 u>> 0x1f).b + edx_7.b
        int32_t eax_10
        void* edx_8
        edx_8:eax_10 = muls.dp.d(0x80808081, var_20_1)
        int32_t edx_10 = (edx_8 + var_20_1) s>> 8
        var_20_1 += ebx
        *(*(esi + arg1[2]) + j + 2) = (edx_10 u>> 0x1f).b + edx_10.b
        int32_t eax_13
        int32_t edx_11
        edx_11:eax_13 = muls.dp.d(0x80808081, i_2)
        int32_t edx_12 = edx_11 + i_2
        i_2 += ebx
        int32_t edx_13 = edx_12 s>> 8
        edx_1 = var_28_1 + ebx
        *(*(esi + arg1[2]) + j + 3) = (edx_13 u>> 0x1f).b + edx_13.b
        j += 4
        var_28_1 = edx_1
    while (j s< 0x100)
    
    ebx += 8
    i = i_3 + 6
    ecx_1 = var_14 + 2
    i_3 = i
    esi = &esi[1]
    var_14 = ecx_1
while (i s< 0x601)

sub_403540(&arg1[5], 0x1ff)

for (char* i_1 = nullptr; i_1 s< 0x1ff; i_1 = &i_1[1])
    char edx_15 = -1
    
    if (i_1 s< 0xff)
        edx_15 = i_1.b
    
    i_1[arg1[5]] = edx_15

sub_469730(arg1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
