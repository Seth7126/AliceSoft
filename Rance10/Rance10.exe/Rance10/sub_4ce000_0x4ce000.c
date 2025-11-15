// 函数: sub_4ce000
// 地址: 0x4ce000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
int32_t* var_c = arg2
void* var_10 = arg1
sub_417d50(*edi, edi[1])
edi[1] = *edi
int32_t* esi_1 = *(arg1 + 0x54)
int32_t* i = *esi_1
arg2 = i

for (; i != esi_1; i = arg2)
    sub_424db0(edi, &i[4])
    sub_429080(&arg2)

return i
