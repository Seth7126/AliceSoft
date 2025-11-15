// 函数: sub_6face2
// 地址: 0x6face2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_6f09b1()
int32_t eax_1

if (eax != 0)
    eax_1 = sub_425af0(eax)

int32_t* esi

if (eax != 0 && eax_1 == arg1)
    esi = arg2
else
    esi = arg2
    esi[0x39] = 1

int32_t* ebx = *(arg1[0x40] + 4)
int32_t* var_38
void arg_8
char eax_4

if (ebx[0x6e] s> 0)
    var_38 = &arg_8
    void var_34
    Concurrency::location::_Assign(&var_34, var_38)
    void* eax_3 = *ebx
    var_38 = esi
    int32_t esi_1 = *(eax_3 + 0x3c)
    j_sub_4033e0()
    eax_4 = esi_1(var_38)

if (ebx[0x6e] s<= 0 || eax_4 == 0)
    int32_t esi_2 = *(*arg1 + 8)
    j_sub_4033e0()
    esi_2(arg2)
    
    if ((arg1[3] & 0xfffffff) != 0 && Concurrency::location::operator==(&arg_8, &arg1[3]) != 0)
        int32_t esi_3 = *(*arg1 + 4)
        j_sub_4033e0()
        esi_3()
    
    if (ebx[0x6d] s> 0)
        void var_18
        Concurrency::location::_Assign(&var_18, &arg_8)
        int32_t var_28_4 = 0xb
        Concurrency::location::_Assign(&var_38, &var_18)
        Concurrency::details::SchedulerBase::StartupVirtualProcessor(ebx, arg1, var_38)

arg2[0x39] = 0
return arg2
