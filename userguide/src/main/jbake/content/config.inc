///////////////////////////////////////////////////////////////////////
NOTE TO WRITERS:
The following sections should be customized for the technology.
This text was originally from the JAX-RS TCK.  Most references
to JAX-RS have been parameterized to serve as a simple starting
point for customization.  There are still many details that will
need to be changed or removed.  The major sections 4.1, 4.2, and
4.3 should be preserved.  If their titles are changed, the links
at the top of config.adoc will need to be changed as well as well
as toc.adoc.
///////////////////////////////////////////////////////////////////////

[[GHGDG]][[generating-the-SMAPs]]

4.1 Generating the SMAPs to be Tested
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The input to the test is a set of SMAPs. The testing party must generate these SMAPs
and they must be generated according to the following procedures. There are two
forms of SMAP: an unresolved SMAP in an SMAP file and a resolved SMAP
embedded in the SourceDebugExtension attribute of a class file. If unresolved
SMAPs are exposed, this SMAP form must be tested. If SMAPs are embedded into
class files, this SMAP form (class files containing a resolved SMAP) must be tested.
If both forms are exposed, the tests must be repeated with each form.

The Product must be used to create the set of SMAPs to be tested. Generally, the
Product is a translator. In this case, a set of test source programs must first be written
-- see “Generating the SMAPs from Test Source” on page 16. If the Product has more
than one input language or more than one output language, the test must be
repeated for each combination of input and output langauge. If the Product has no
input language, an SMAP for each type of output must be used.

[[GCLJG]][[generating-SMAPs]]

4.1.1 Generating the SMAPs from Test Source
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Let us call the input language of the translator LI. A set of test source
programs in LI must be written.

The set of test source programs in LI must exercise all control structures in LI, all
subroutine invocation mechanisms in LI and all source inclusion mechanisms in LI..
Any of these which do not exist in LI are, of course, excepted.

For each test source program, the Product must be used to generate the output
program and its corresponding SMAP. These SMAPs will then be submitted to the
TCK test.