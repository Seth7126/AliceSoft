// 函数: ?DestroyAllocatedNodeData@ResourceManager@details@Concurrency@@QAEXPAUSchedulerNode@23@@Z
// 地址: 0x6ec1ed
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* ebx = arg2
int32_t i = 0

if (*(arg1 + 0x18) u> 0)
    int32_t* edi_1 = ebx + 0x30
    
    do
        _free(*edi_1)
        i += 1
        edi_1 = &edi_1[0xd]
    while (i u< *(arg1 + 0x18))
    
    ebx = arg2

return _free(ebx)
