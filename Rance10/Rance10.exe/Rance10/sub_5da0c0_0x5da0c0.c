// 函数: sub_5da0c0
// 地址: 0x5da0c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t result = sub_5da190(arg1, arg3)

if (arg1[6].b == 0)
    return result

sub_56b940(arg1)
sub_56b980(arg1)
sub_56b9e0(arg1)
sub_56ba60(arg1)
int32_t ecx_4 = arg1[1]
void* eax = *arg1

if (eax != ecx_4)
    void* edx_1 = eax + 0xbc
    
    do
        eax += 0xd8
        float xmm1_2 = *(edx_1 - 0x10) * arg2
        float xmm2_1 = *(edx_1 - 0xc) * arg2
        *(edx_1 - 4) = *(edx_1 - 0x14) * arg2 f+ *(edx_1 - 4)
        *edx_1 = *edx_1 + xmm1_2
        *(edx_1 + 4) = *(edx_1 + 4) + xmm2_1
        edx_1 += 0xd8
    while (eax != ecx_4)

sub_5da350(arg1, arg2)
sub_5da400(arg1)
sub_5da230(arg1, arg2)
return sub_5da040(arg1)
