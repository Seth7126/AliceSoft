// 函数: sub_420c00
// 地址: 0x420c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t eax_1 = (***(arg1 + 8))()
int32_t esi = 0

if (eax_1 s> 0)
    do
        char eax_4
        
        switch ((*(**(arg1 + 8) + 0x10))(esi))
            case 0
                eax_4 = sub_420cc0(arg1, 0, esi, arg2, arg3)
            label_420c77:
                
                if (eax_4 == 0)
                    return 0
            case 1
                eax_4 = sub_420ee0(arg1, 1, esi, arg2, arg3)
                goto label_420c77
            case 3
                eax_4 = sub_4211b0(arg1, 3, esi, arg2, arg3)
                goto label_420c77
            case 4
                eax_4 = sub_4213c0(arg1, 4, esi, arg2, arg3)
                goto label_420c77
        
        esi += 1
    while (esi s< eax_1)

sub_421670(arg1, arg2, arg3)
int32_t result
result.b = 1
return result
