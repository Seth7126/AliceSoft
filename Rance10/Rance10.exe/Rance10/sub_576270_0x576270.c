// 函数: sub_576270
// 地址: 0x576270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* ebp = arg1
int32_t* i = ebp[6]

for (int32_t edi = ebp[7]; i != edi; i = &i[3])
    int32_t* var_18_1 = arg1
    char eax
    eax, arg1 = sub_58dda0(i, arg2)
    
    if (eax == 0)
        return 0

int32_t* esi = *ebp
int32_t edi_1 = ebp[1]

if (esi == edi_1)
    return 1

while (true)
    if ((*(**esi + 4))(arg2, arg3) == 0)
        return 0
    
    esi = &esi[1]
    
    if (esi == edi_1)
        return 1
