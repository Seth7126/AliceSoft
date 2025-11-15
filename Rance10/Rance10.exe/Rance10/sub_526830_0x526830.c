// 函数: sub_526830
// 地址: 0x526830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t esi = 0
int32_t ecx = arg1[1]

if (ecx s<= 0)
    return 

do
    int32_t eax = arg1[2]
    int32_t ebx_1 = eax + esi
    
    if (ebx_1 s>= eax && ecx + eax s> ebx_1)
        int32_t* ecx_4 = (ebx_1 - eax) << 2
        int32_t* ebp_1 = *(ecx_4 + arg1[3])
        
        if (ebp_1 != 0)
            sub_4ed5c0(ebp_1, arg1[7])
            sub_4f1f60(&ebp_1[0x19])
            (*(*ebp_1 + 4))()
            *(ecx_4 + arg1[3]) = 0
            sub_5264d0(arg1, ebx_1)
    
    ecx = arg1[1]
    esi += 1
while (esi s< ecx)
