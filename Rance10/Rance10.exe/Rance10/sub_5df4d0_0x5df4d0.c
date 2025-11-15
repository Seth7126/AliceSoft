// 函数: sub_5df4d0
// 地址: 0x5df4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t* ebp = arg2
void** eax = sub_5dfa20(&arg1[3], ebp)
void** edi = arg1[3]
void** esi = eax
char eax_2

if (esi != edi)
    eax_2 = sub_5df310(ebp, &esi[4])

if (esi == edi || eax_2 != 0)
    esi = edi

if (esi != edi)
    return esi[8]

int32_t result = (arg1[1] - *arg1) s>> 4
sub_5df810(arg1, ebp)
void** eax_5
void* ecx_5
eax_5, ecx_5 = sub_5dfa20(&arg1[3], ebp)
void** esi_1 = eax_5
char eax_7

if (esi_1 != arg1[3])
    eax_7, ecx_5 = sub_5df310(ebp, &esi_1[4])

if (esi_1 == arg1[3] || eax_7 != 0)
    void* var_18_5 = ecx_5
    arg2 = ebp
    void*** var_1c_1 = &arg2
    int32_t* eax_8 = sub_5dfa60(ecx_5)
    sub_5dfb10(&arg1[3], &arg2, esi_1, &eax_8[4], eax_8)
    esi_1 = arg2

esi_1[8] = result
return result
