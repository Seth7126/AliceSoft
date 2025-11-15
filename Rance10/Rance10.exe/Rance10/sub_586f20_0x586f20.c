// 函数: sub_586f20
// 地址: 0x586f20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
void* ebp = arg2
sub_6ca100(ebp, (arg1[1] - *arg1) s>> 3)
int32_t edi = arg1[1]

for (int32_t** i = *arg1; i != edi; i = &i[2])
    char* var_18_1 = &arg2
    
    if (*i != 0)
        arg2.b = 1
        sub_4263a0(ebp + 4, var_18_1)
        sub_584770(*i, ebp)
    else
        arg2.b = 0
        sub_4263a0(ebp + 4, var_18_1)

arg2.b = arg1[4].b != 0
return sub_4263a0(ebp + 4, &arg2)
