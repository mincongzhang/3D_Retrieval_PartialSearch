# 3D_Retrieval_PartialSearch

## individual query
<a style="float:left;">
    <img src="https://github.com/mincongzhang/3D_Retrieval_PartialSearch/raw/master/individual_query_results1.png"  height="300"/>
</a>
<a style="float:left;">
    <img src="https://github.com/mincongzhang/3D_Retrieval_PartialSearch/raw/master/individual_query_results2.png"  height="300"/>
</a>
## combined query
<a style="float:left;">
    <img src="https://github.com/mincongzhang/3D_Retrieval_PartialSearch/raw/master/combined_results.png" height="300"/>
</a>




### Example:
### initial partial weight setting:
weight   [0 0 0 0 0 0]  

### first round:  
candidate[A B C D E F]  
weight   [0 1 2 3 4 5]  

### second round routine:  
#### allocate weights according to descriptors difference from low to high:  
candidate[E A C D B F]  
weight   [0 1 2 3 4 5]  

#### sort candidate(weight) by ID:  
candidate[A B C D E F]  
weight   [1 4 2 3 0 5]  

#### weight = weight + previous weight  
weight = [1 5 4 6 4 10]  
candidate[A B C D E F]  

#### write current weight to file;  

#### sort weight from low to high:  
candidate[A C E B D F]  
weight   [1 4 4 5 6 10]  


### Reference (an approach that can be used in partial search)
1. Drost, Bertram, et al. "Model globally, match locally: Efficient and robust 3D object recognition." Computer Vision and Pattern Recognition (CVPR), 2010 IEEE Conference on. IEEE, 2010. 
