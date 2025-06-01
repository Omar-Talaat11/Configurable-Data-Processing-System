
#ifndef PROCESSOR
#define PROCESSOR

class Processor
{
    public:
    virtual void display_type() const = 0;
};

class TextProcessor : public Processor
{
    public:
    void display_type() const override;
};

class NumericProcessor : public Processor
{
    public:
    void display_type() const override;
};

class ImageProcessor : public Processor
{
    public:
    void display_type() const override ;
};

class AudioProcessor : public Processor
{
    public:
    void display_type() const override ;
};

#endif