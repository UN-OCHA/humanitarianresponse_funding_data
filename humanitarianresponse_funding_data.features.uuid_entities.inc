<?php
/**
 * @file
 * humanitarianresponse_funding_data.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function humanitarianresponse_funding_data_uuid_default_entities() {
  $entities = array();

  $entities['funding'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/30e8e980-7f18-afe4-f136-b0fe6ec903f4',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Financial Tracking',
    'path' => array(
      'alias' => 'funding/financial-tracking',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'uuid' => '30e8e980-7f18-afe4-f136-b0fe6ec903f4',
    'vocabulary_machine_name' => 'funding',
    'weight' => '0',
  );
  $entities['funding'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/21e36383-ca64-56d4-3526-5fe3167acf7f',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Consolidated Appeal',
    'path' => array(
      'alias' => 'funding/consolidated-appeal',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'uuid' => '21e36383-ca64-56d4-3526-5fe3167acf7f',
    'vocabulary_machine_name' => 'funding',
    'weight' => '0',
  );

  return $entities;
}
